from datamodel import OrderDepth, TradingState, Order
from typing import List

class Trader:
    def __init__(self):
        self.max_position = 20 

    def run(self, state: TradingState):
        print("traderData: " + state.traderData)
        print("Observations: " + str(state.observations))

        result = {}

        for product, order_depth in state.order_depths.items():
            orders: List[Order] = []
            
            if not order_depth.buy_orders or not order_depth.sell_orders:
                continue  

    
            best_bid = max(order_depth.buy_orders.keys())
            best_ask = min(order_depth.sell_orders.keys())

            fair_price = (best_bid + best_ask) / 2
            print(f"[{product}] Best Bid: {best_bid}, Best Ask: {best_ask}, Fair Price: {fair_price}")

           
            current_position = state.position.get(product, 0)

       
            buy_price = best_bid  
            sell_price = best_ask 

            buy_quantity = 5 if current_position < self.max_position else 0
            sell_quantity = 5 if current_position > -self.max_position else 0

            if buy_quantity > 0:
                print(f"Placing BUY order: {buy_quantity} at {buy_price}")
                orders.append(Order(product, buy_price, buy_quantity))

            if sell_quantity > 0:
                print(f"Placing SELL order: {sell_quantity} at {sell_price}")
                orders.append(Order(product, sell_price, -sell_quantity))

            result[product] = orders

   
        traderData = "SAMPLE"

  
        conversions = 1

        return result, conversions, traderData
