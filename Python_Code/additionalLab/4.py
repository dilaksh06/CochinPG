class Grandfather:
    def __init__(self, assets):
        self.assets = assets

    def distribute_assets_to_father(self):
        return 0.5 * self.assets

    def show_assets(self):
        print(f"Grandfather's total assets: {self.assets}")

class Father(Grandfather):
    def __init__(self, grandfather_assets):
        super().__init__(grandfather_assets)
        self.assets = self.distribute_assets_to_father()

    def distribute_assets_to_son(self):
        return 0.5 * self.assets

    def show_assets(self):
        print(f"Father's total assets: {self.assets}")

class Son(Father):
    def __init__(self, grandfather_assets):
        super().__init__(grandfather_assets)
        self.assets = self.distribute_assets_to_son()

    def show_assets(self):
        print(f"Son's total assets: {self.assets}")

# Example Usage
grandfather_assets = 100000  # Initial total assets of the Grandfather
grandfather = Grandfather(grandfather_assets)
father = Father(grandfather_assets)
son = Son(grandfather_assets)

# Display each person's total assets
grandfather.show_assets()
father.show_assets()
son.show_assets()
