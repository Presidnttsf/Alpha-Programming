#include <stdio.h>

int main() {
    int choice;
    printf("--- THE LATE-TO-WORK SIMULATOR ---\n");
    printf("You are 2 hours late. Your boss is staring at you.\n");
    printf("1. 'Aliens stole my alarm.'\n2. 'I saved a cat.'\n3. 'I overslept.'\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n👽 Boss: 'Creative! Fired from here, but go write sci-fi. Leave!'\n");
    } else if (choice == 2) {
        printf("\n🐱 Boss: 'Aww. You are still fired, but the cat appreciates it.'\n");
    } else if (choice == 3) {
        printf("\n😡 Boss: 'Honest! You keep your job, but you must clean the toilet with a toothbrush.'\n");
    } else {
        printf("\n❌ You panicked, made animal noises, and security kicked you out.\n");
    }
    return 0;
}
