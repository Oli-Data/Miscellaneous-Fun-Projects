categories = {}

def main():
    print("Welcome to Oli's Expense Tracker")

    while True:
        print("Please enter the category, the amount, and lastly any optional note.")
        category = input("Category: ").strip()
        if category.lower() == 'exit':
            break

        try:
            amount = float(input(f"Enter the expense for {category}: "))
        except ValueError:
            print("Please enter a valid number for the amount.❌")
            continue  

        op_note = input("Optional Note (if nothing just hit enter): ")

        if category not in categories:
            categories[category] = []
        
        categories[category].append({"amount": amount, "note": op_note})

        print('\nEntry added.✅')
        answer = input('If you are done, type "yes", or type "no" to add another: ').strip().lower()
        if answer == "yes":
            break

    print("\nExpense Summary:")
    for cat, entries in categories.items():
        total = sum(entry['amount'] for entry in entries)
        print(f"\nCategory: {cat} — Total: ${total:.2f}")
        for i, entry in enumerate(entries, 1):
            note = f" | Note: {entry['note']}" if entry['note'] else ""
            print(f"  {i}. Amount: ${entry['amount']:.2f}{note}")

if __name__ == "__main__":
    main()