#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// Signal handler for SIGUSR1
void handle_sigusr1(int sig) {
    printf("Received SIGUSR1!\n");
}

// Signal handler for SIGUSR2
void handle_sigusr2(int sig) {
    printf("Received SIGUSR2!\n");
}

int main() {
    // Assign handlers
    signal(SIGUSR1, handle_sigusr1);
    signal(SIGUSR2, handle_sigusr2);

    printf("PID: %d\n", getpid());
    while (1) {
        pause(); // Wait for signals
    }
    return 0;
}