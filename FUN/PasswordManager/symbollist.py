import livedata

active_stocks = ["1900", ]

symbol_list: list = []

for stock_id in active_stocks:
    symbol_list.append(livedata.Symbol(stock_id))
