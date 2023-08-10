

```markdown
# Round Robin Scheduling Algorithm Implementation

This C program implements the Round Robin scheduling algorithm to simulate the scheduling of processes in a CPU. The program calculates the average waiting time and average turnaround time for a given set of processes and their burst times.

## How to Use

1. Compile the program using a C compiler (e.g., GCC).

   ```
   gcc round_robin.c -o round_robin
   ```

2. Run the compiled executable.

   ```
   ./round_robin
   ```

3. Follow the prompts to enter the necessary information:
   - Number of processes
   - Burst time and arrival time for each process
   - Time quantum

4. The program will simulate the scheduling of processes using the Round Robin algorithm and display the calculated average waiting time and average turnaround time.

## Input Requirements

- Number of processes: Enter the total number of processes you want to schedule.
- Burst time: For each process, enter the time required for the process to complete its execution.
- Arrival time: For each process, enter the time at which the process arrives in the ready queue.
- Time quantum: Enter the time quantum for the Round Robin algorithm.

## Output

The program will output the average waiting time and average turnaround time for the scheduled processes.

## Algorithm

The algorithm used in this program is as follows:
1. Initialize necessary variables and arrays.
2. Read process information (burst time, arrival time) and time quantum from the user.
3. Implement the Round Robin scheduling algorithm:
   - Loop through processes until all are completed.
   - If the burst time of the current process is less than or equal to the time quantum:
     - Subtract the burst time from the process and increment time.
     - Update waiting and turnaround times if the process completes.
   - If the burst time is greater than the time quantum:
     - Subtract the time quantum from the burst time and increment time.
   - Move to the next process in a circular manner.
4. Calculate average waiting time and average turnaround time.
5. Display the results.

## Author

Abijith K A

## License

This project is licensed under the [MIT License](LICENSE).

```

