import random

def main():
    print("Welcome to Oli's Quote Generator")
    print("What mood might you be in?")
    print("Choose a category:")
    for category in quotes:
        print(f"* {category}")

    decision = input("\nWhat's your vibe? ").strip().title()
    if decision in quotes:
        selected = random.choice(quotes[decision])
        print(f"\n* {selected}")
    else:
        print("This isn't on the list, how weird. Please try again.")

quotes = {
    "Motivational": ["You are the fire they tried to extinguish. Burn anyway.",
                     "Even if you fall on your face, you’re still moving forward."],
    "Flirty": ["Are you made of copper and tellurium? Because you’re Cu-Te.",
               "If we were on GitHub, I’d star you every time."],
    "Unhinged": ["Delete the world and build your own.",
                 "Who needs coffee when vengeance fuels your soul?"],
    "Nova-approved": ["You're not broken. You're becoming.",
                      "Love with your whole chest or don’t bother."]
}
if __name__ == "__main__":
    main()