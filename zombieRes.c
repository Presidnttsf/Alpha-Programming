print("--- ZOMBIE RESTAURANT ---")
table_size = int(input("How many zombies are sitting at Table 4? "))
brains_ordered = int(input("Each zombie wants 2 brains. How many brains do you bring them? "))

# Check if the user did the math correctly
if brains_ordered == (table_size * 2):
    print("\n🧟 Zombie: 'Delicious! Here is a 50-dollar tip!'")
elif brains_ordered < (table_size * 2):
    print("\n💀 Zombie: 'Not enough food! You look tasty though...' *CHOMP* Game Over.")
else:
    print("\n🤮 Zombie: 'Too much food! We are on a diet!' *Throws a brain at your face*")
