class Symbol:
    def __init__(self, idd) -> None:
        self.id = idd
        self.latest_data:dict
        self.active_order_count:int
        self.active_orders:list
       
       
        # self.active_orders: dict = {"time": None , "price":float, "qtty": int, "buy_cost": float }
        # structure dict{"time": , "price":, "qtty": , "buy_cost": , }
class Order:
    def __init__(self) -> None:
        self.details
        # self.
    def save_order(self, order):
        