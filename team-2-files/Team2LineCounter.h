#ifndef TEAM2LINECOUNTER_H_
#define TEAM2LINECOUNTER_H_

#include <string>
#include <iostream>
#include <vector>

class Team2LineCounter {
public:
  Team2LineCounter();
  virtual ~Team2LineCounter() =default;
  const int CountLines(std::vector<std::string> content) const;
private:
};


#endif /* TEAM1LINECOUNTER2_H_ */
