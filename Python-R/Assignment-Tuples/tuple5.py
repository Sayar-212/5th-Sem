def generate_income_report(monthly_incomes):
    total_income = sum(income for month, income in monthly_incomes)
    print(f"Total income: {total_income}\n")
    quarters = [monthly_incomes[i:i+3] for i in range(0, len(monthly_incomes), 3)]
    for i, quarter in enumerate(quarters, 1):
        quarter_income = sum(income for month, income in quarter)
        for month, income in quarter:
            print(f" {month}: {income}")
        print("-" * 20)
        print(f" Quarter: {quarter_income}\n")
monthly_incomes = (
    ("January", 5000), ("February", 5500), ("March", 6000),
    ("April", 5800), ("May", 6200), ("June", 7000),
    ("July", 7500), ("August", 7300), ("September", 6800),
    ("October", 6500), ("November", 6000), ("December", 5500)
)
generate_income_report(monthly_incomes)
