#include "Team3Xx.h"

Team3Xx::Team3Xx()
{}
int Team3Xx::calculate(const std::string& expr) const {
    if(expr.empty()) return 0;

    auto op_pos = expr.find_first_of('+*');
    if (op_pos == std::string::npos) {
        return std::stoi(expr);
    }

    auto sub_left = expr.substr(0, op_pos);
    auto sub_right = expr.substr(op_pos + 1);
    auto op = expr.substr(op_pos, 1);

    auto left_nr = std::stoi(sub_left);
    auto right_nr = std::stoi(sub_right);

    if (op == "+") {
        return left_nr + right_nr;
    } else if (op == "*") {
        return left_nr * right_nr;
    }
}
