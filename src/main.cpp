#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

std::ostream& operator<<(std::ostream& os, const OrderBookType& t) {
  switch (t) {
  case OrderBookType::ask: os << "ask"; break;
  case OrderBookType::bid: os << "bid"; break;
  default: os << "unknown"; break;
  }
  return os;
}



int main()
{
  // std::vector<OrderBookEntry> orders;

  // orders.push_back(OrderBookEntry{ 10000, 0.02, "2020/03/18 16:01:24.884492", "BTC/USDT", OrderBookType::bid });
  // orders.push_back(OrderBookEntry{ 20000, 0.030, "2020/03/19 17:02:24.884492", "BTC/USDT", OrderBookType::ask });
  // orders.push_back(OrderBookEntry{ 30000, 0.040, "2020/03/20 18:03:24.884492", "BTC/USDT", OrderBookType::bid });

  // // 3rd method of iterating over a vector: using an object style syntax
  // for (unsigned int i = 0; i < orders.size(); ++i)
  // {
  //   std::cout << "The price of order no " << i + 1 << " is " << orders.at(i).price << std::endl;
  //   std::cout << "The amount of order no " << i + 1 << " is " << orders.at(i).amount << std::endl;
  //   std::cout << "The timestamp of order no " << i + 1 << " is " << orders.at(i).timestamp << std::endl;
  //   std::cout << "The product of order no " << i + 1 << " is " << orders.at(i).product << std::endl;
  //   std::cout << "The order type of order no " << i + 1 << " is " << orders.at(i).orderType << std::endl;
  // }
  MerkelMain app{};
  app.printMenu();
}

