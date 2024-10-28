all: task1 task2 task3 task4 task5 task1b

task1: task1.c
gcc task1.c -o task1

task1b:task1b.c
gcc task1b.c -o task1b

task2: task2.c
gcc task2.c -o task2

task3: task3.c
gcc task3.c -o task3

task4: task4.c
gcc task4.c -o task4

task5: task5.c
gcc task5.c -o task5

clean:
rm -f task1 task1b task2 task3 task4 task5
