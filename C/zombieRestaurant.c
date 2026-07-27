#include <stdio.h>

int main() {
    int table_size, brains_ordered;
    printf("--- ZOMBIE RESTAURANT ---\n");
    printf("How many zombies are at the table? ");
    scanf("%d", &table_size);
    printf("Each wants 2 brains. How many do you bring? ");
    scanf("%d", &brains_ordered);

    if (brains_ordered == (table_size * 2)) {
        printf("\n🧟 Zombie: 'Delicious! Here is a 50-dollar tip!'\n");
    } else if (brains_ordered < (table_size * 2)) {
        printf("\n💀 Zombie: 'Not enough food! You look tasty...' *CHOMP* Game Over.\n");
    } else {
        printf("\n🤮 Zombie: 'Too much food! We are on a diet!' *Throws a brain at you*\n");
    }
    return 0;
}
