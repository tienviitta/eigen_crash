#include <Eigen/Dense>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;
using namespace std;

// https://zed0.co.uk/clang-format-configurator/

int main() {

    // Read params
    std::ifstream params_f("sims/params.json");

    if (params_f) {
        // Parse JSON
        json p_top = json::parse(params_f);
        // cout << setw(4) << p_top << "\n";
        // Get sub dicts
        auto p_sys = p_top["sys"];
        cout << "p_sys:\n" << p_sys << "\n";
        // cout << p_sys["bw"].get<int>() << "\n";
        auto p_ssb = p_sys["ssb"];
        cout << "p_ssb:\n" << p_ssb << "\n";
        auto p_bwp = p_sys["bwp"];
        cout << "p_bwp:\n" << p_bwp << "\n";
    }

    Eigen::Matrix2d a;
    a << 1, 2, 3, 4;
    cout << "a =\n" << a << "\n";
    Eigen::MatrixXd b(2, 2);
    b << 2, 3, 1, 4;
    cout << "b =\n" << b << "\n";
    cout << "a + b =\n" << a + b << "\n";
    cout << "a - b =\n" << a - b << "\n";
    cout << "Doing a += b;"
         << "\n";
    a += b;
    cout << "Now a =\n" << a << "\n";

    return EXIT_SUCCESS;
}
