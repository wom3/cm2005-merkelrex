#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include "OrderBookEntry.h"

std::ostream& operator<<(std::ostream& os, const OrderBookType& t) {
  switch (t) {
  case OrderBookType::ask: os << "ask"; break;
  case OrderBookType::bid: os << "bid"; break;
  default: os << "unknown"; break;
  }
  return os;
}

void printMenu()
{
  // 1 print help
  std::cout << "1: Print help " << std::endl;
  // 2 print exchange stats
  std::cout << "2: Print exchange stats" << std::endl;
  // 3 make an offer
  std::cout << "3: Make an offer " << std::endl;
  // 4 make a bid 
  std::cout << "4: Make a bid " << std::endl;
  // 5 print wallet
  std::cout << "5: Print wallet " << std::endl;
  // 6 continue   
  std::cout << "6: Continue " << std::endl;

  std::cout << "============== " << std::endl;
}

void printHelp()
{
  std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers. " << std::endl;
}

void  printMarketStats()
{
  std::cout << "Market looks good. " << std::endl;
}

void enterOffer()
{
  std::cout << "Mark and offer - enter the amount " << std::endl;
}

void enterBid()
{
  std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
  std::cout << "Your wallet is empty. " << std::endl;
}

void gotoNextTimeframe()
{
  std::cout << "Going to next time frame. " << std::endl;
}

int getUserOption()
{
  int userOption;

  std::cout << "Type in 1-6" << std::endl;
  std::cin >> userOption;
  std::cout << "You chose: " << userOption << std::endl;
  return userOption;
}

void processUserOption(int userOption)
{
  if (userOption == 0) // bad input
  {
    std::cout << "Invalid choice. Choose 1-6" << std::endl;
  }
  if (userOption == 1) // bad input
  {
    printHelp();
  }
  if (userOption == 2) // bad input
  {
    printMarketStats();
  }
  if (userOption == 3) // bad input
  {
    enterOffer();
  }
  if (userOption == 4) // bad input
  {
    enterBid();
  }
  if (userOption == 5) // bad input
  {
    printWallet();
  }
  if (userOption == 6) // bad input
  {
    gotoNextTimeframe();
  }
}

int main()
{
  // enum class OrderBookType { bid, ask };

  // double price = 5319.450228;
  // double amount = 0.00020075;
  // std::string timestamp{ "2020/03/17 17:01:24.884492" };
  // std::string product{ "BTC/USDT" };
  // std::string orderType{ "bid" };
  // OrderBookType orderType = OrderBookType::bid;

  // std::vector<double> prices;
  // std::vector<double> amounts;
  // std::vector<std::string> timestamps;
  // std::vector<std::string> products;
  // std::vector<OrderBookType> orderTypes;

  // prices.push_back(5319.450228);
  // amounts.push_back(0.00020075);
  // timestamps.push_back("2020/03/17 17:01:24.884492");
  // products.push_back("BTC/USDT");
  // orderTypes.push_back(OrderBookType::bid);

  // prices.push_back(5320.450228);
  // amounts.push_back(0.00020175);
  // timestamps.push_back("2020/03/18 16:01:24.884492");
  // products.push_back("BTC/USDT");
  // orderTypes.push_back(OrderBookType::ask);

  // std::cout << "prices: " << prices[0] << std::endl;
  // std::cout << "amounts: " << amounts[0] << std::endl;
  // std::cout << "prices: " << prices[1] << std::endl;
  // std::cout << "amounts: " << amounts[1] << std::endl;

  // while (true)
  // {
  //   printMenu();
  //   int userOption = getUserOption();
  //   processUserOption(userOption);
  // }
  // return 0;

  std::vector<OrderBookEntry> orders;

  // order1.price = 10000;
  // order1.amount = 0.002;
  // order1.timestamp = "2020/03/18 16:01:24.884492";
  // order1.product = "BTC/USDT";
  // order1.orderType = OrderBookType::ask;

  orders.push_back(OrderBookEntry{ 10000, 0.02, "2020/03/18 16:01:24.884492", "BTC/USDT", OrderBookType::bid });
  orders.push_back(OrderBookEntry{ 20000, 0.030, "2020/03/19 17:02:24.884492", "BTC/USDT", OrderBookType::ask });
  orders.push_back(OrderBookEntry{ 30000, 0.040, "2020/03/20 18:03:24.884492", "BTC/USDT", OrderBookType::bid });


  // // 1st method of iterating over a vector
  // for (OrderBookEntry& order : orders)
  // {
  //   std::cout << "The price of order is " << order.price << std::endl;
  //   std::cout << "The amount of order is " << order.amount << std::endl;
  //   std::cout << "The timestamp of order is " << order.timestamp << std::endl;
  //   std::cout << "The product of order is " << order.product << std::endl;
  //   std::cout << "The order type of order is " << order.orderType << std::endl;
  // }

  // // 2nd method of iterating over a vector: using an array style loop
  // for (unsigned int i = 0; i < orders.size(); ++i)
  // {
  //   std::cout << "The price of order no " << i + 1 << " is " << orders[i].price << std::endl;
  //   std::cout << "The amount of order no " << i + 1 << " is " << orders[i].amount << std::endl;
  //   std::cout << "The timestamp of order no " << i + 1 << " is " << orders[i].timestamp << std::endl;
  //   std::cout << "The product of order no " << i + 1 << " is " << orders[i].product << std::endl;
  //   std::cout << "The order type of order no " << i + 1 << " is " << orders[i].orderType << std::endl;
  // }

  // 3rd method of iterating over a vector: using an object style syntax
  for (unsigned int i = 0; i < orders.size(); ++i)
  {
    std::cout << "The price of order no " << i + 1 << " is " << orders.at(i).price << std::endl;
    std::cout << "The amount of order no " << i + 1 << " is " << orders.at(i).amount << std::endl;
    std::cout << "The timestamp of order no " << i + 1 << " is " << orders.at(i).timestamp << std::endl;
    std::cout << "The product of order no " << i + 1 << " is " << orders.at(i).product << std::endl;
    std::cout << "The order type of order no " << i + 1 << " is " << orders.at(i).orderType << std::endl;
  }


}

