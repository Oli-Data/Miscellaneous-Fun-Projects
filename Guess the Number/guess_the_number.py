import random

def guess_the_number():
    """A simpl 'Guess the Number' game."""
    secret_number = random.randint(1,100)
    guess = 0
    guess_count = 0

    print("Welcome to 'Gues the Number'!")
    print("I'm thinkg of a number between 1 and 100.")

    while guess != secret_number:
        try:
            guess = int(input("enter your guess: "))
            guess_count += 1
            if guess < secret_number:
                print("Too low! Try again.")
            elif guess > secret_number:
                print("Too high! Try again.")
            else:
                print(f"Congratulations! You guessed the number {secret_number} in {guess_the_number} guesses!")
        except ValueError:
            print("Invalid input. Please enter a whole number.")
        except Exception as e:
            print(f"An unexpected error ocurred: {e}")

if __name__ == "__main__":
    guess_the_number()

