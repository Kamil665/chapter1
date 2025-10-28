age1 = int(input("Возраст Тани: "))
age2 = int(input("Возраст Мити: "))

average = (age1 + age2) / 2

differ1 = abs(age1 - average)
differ2 = abs(age2 - average)

print(" ")

print(f"Средний возраст: {average}")

print(" ")

diff1 = abs(age1 - average)
diff2 = abs(age2 - average)

def get_year_word(diff):
    if diff == 1:
        return "год"
    elif 2 <= diff <= 4:
        return "года"
    else:
        return "лет"
    
print(f"Возраст Тани: на {diff1} {get_year_word(diff1)} от среднего")
print(f"Возраст Мити: на {diff2} {get_year_word(diff2)} от среднего")
