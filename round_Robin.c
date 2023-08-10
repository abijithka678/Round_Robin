#include <stdio.h>

int main() {
    int num, i, quanta, flag;
    int bt[20], at[20], rt[20], remain;
    int time = 0; // Initialize time to 0
    float sum_tat = 0, sum_wt = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &num);
    remain = num;

    for (i = 0; i < num; i++) {
        printf("Enter the burst time of process %d: ", i + 1);
        scanf("%d", &bt[i]);
        printf("Enter the arrival time of process %d: ", i + 1);
        scanf("%d", &at[i]);
        rt[i] = bt[i];
    }

    printf("Enter the time quantum: ");
    scanf("%d", &quanta);

    i = 0; // Reset i for starting from the first process

    while (remain != 0) {
        if (rt[i] <= quanta && rt[i] > 0) {
            time += rt[i];
            rt[i] = 0;
            flag = 1;
        } else if (rt[i] > 0) {
            rt[i] -= quanta;
            time += quanta;
        }

        if (rt[i] == 0 && flag == 1) {
            remain--;
            sum_wt += time - at[i] - bt[i];
            sum_tat += time - at[i];
            flag = 0;
        }

        i = (i + 1) % num; // Use modulo to loop back to the first process if needed
    }

    float avg_wt = sum_wt / num;
    float avg_tat = sum_tat / num;

    printf("Average Waiting Time: %.2f\n", avg_wt);
    printf("Average Turnaround Time: %.2f\n", avg_tat);

    return 0;
}
