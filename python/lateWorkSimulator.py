print("--- THE LATE-TO-WORK SIMULATOR ---")
print("You are 2 hours late. Your boss is staring at you with lasers in his eyes.")
print("Choose your excuse:\n1. 'An alien spaceship stole my alarm clock.'\n2. 'I was saving a cat from a tree.'\n3. 'Honestly, I just overslept.'")

choice = int(input("Enter your choice (1-3): "))

if choice == 1:
    print("\n👽 Boss: 'Creative! You are fired from work, but hired as a sci-fi writer. Pack your bags!'")
elif choice == 2:
    print("\n🐱 Boss: 'Aww, how sweet. You are still fired, but the cat likes you.'")
elif choice == 3:
    print("\n😡 Boss: 'Honesty is the best policy. You aren't fired, but you have to clean the office toilets with a toothbrush today.'")
else:
    print("\n❌ You panicked and just made weird animal noises. The boss called security.")
