#ifndef TEAM3XX_H_
#define TEAM3XX_H_

#include <string>
#include <iostream>

class Team3Xx {
public:
  Team3Xx();
  virtual ~Team3Xx() =default;
  int calculate(const std::string& expr) const;
private:
};

#endif /* TEAM3XX_H_ */
