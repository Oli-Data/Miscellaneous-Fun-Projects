# 💰 Oli's Expense Tracker

Welcome to **Oli's Expense Tracker** — a simple, interactive **command-line app** built in Python that helps you log expenses by category, add notes, and view a summary of your spending.

Whether you’re budgeting for food, transport, or the occasional coffee splurge ☕️, this lightweight tool makes it easy to track where your money goes.

---

## 🚀 How to Run
1. Clone this repository or download the script.  
2. Run the program with Python 3:  
   ```bash
   python expense_tracker.py

## ✨ Features
- Categorize expenses (e.g., **Food**, **Rent**, **Utilities**)  
- Add optional notes for each entry  
- Automatically calculates **totals per category**  
- Simple, text-based interface with friendly prompts

## 📝 Example Usage
$ python expense_tracker.py

Welcome to Oli's Expense Tracker
Please enter the category, the amount, and lastly any optional note.
Category: Food
Enter the expense for Food: 12.50
Optional Note (if nothing just hit enter): lunch

Entry added.✅
If you are done, type "yes", or type "no" to add another: yes

Expense Summary:

Category: Food — Total: $12.50
  1. Amount: $12.50 | Note: lunch

## 📌 Notes
- Type exit as the category at any time to quit immediately.
- Data is stored only during the current run (no persistence yet).

 ## 🔮 Next Steps / Improvements
- Add data persistence (save to JSON/CSV)
- Track dates for each expense
- Support export to reports or dashboards
