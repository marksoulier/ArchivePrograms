

class Item:
    def __init__(self, name = "0"): #constuctor
        self.name = name
    def calculate_total_price(self):
        return 5

item1 = Item()
item2 = Item("mark")
X = item1.calculate_total_price()

print("{0}{1}{2}{3}".format(X, item1.name, item1.calculate, item2.name))

