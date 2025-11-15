#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType { bid, ask };
// OrderBookEntry class with a constructor function
class OrderBookEntry
{
public:

  OrderBookEntry(
    double _price,
    double _amount,
    std::string _timestamp,
    std::string _product,
    OrderBookType _orderType
  ) : price(_price), amount(_amount), timestamp(_timestamp), product(_product), orderType(_orderType)
  {
  }
  double price;
  double amount;
  std::string timestamp;
  std::string product;
  OrderBookType orderType;
};


int main()
{
  // Creating a vector
  std::vector<OrderBookEntry> orders;

  orders.push_back(OrderBookEntry{ 10000, 0.02, "2020/03/18 16:01:24.884492", "BTC/USDT", OrderBookType::bid });
  orders.push_back(OrderBookEntry{ 20000, 0.030, "2020/03/19 17:02:24.884492", "BTC/USDT", OrderBookType::ask });
  orders.push_back(OrderBookEntry{ 30000, 0.040, "2020/03/20 18:03:24.884492", "BTC/USDT", OrderBookType::bid });

  // Iterating over a vector: using an object style syntax
  for (unsigned int i = 0; i < orders.size(); ++i)
  {
    std::cout << "The price of order no " << i + 1 << " is " << orders.at(i).price << std::endl;
    std::cout << "The amount of order no " << i + 1 << " is " << orders.at(i).amount << std::endl;
    std::cout << "The timestamp of order no " << i + 1 << " is " << orders.at(i).timestamp << std::endl;
    std::cout << "The product of order no " << i + 1 << " is " << orders.at(i).product << std::endl;
  }


}

