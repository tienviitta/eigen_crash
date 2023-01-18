#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

using json = nlohmann::json;
using namespace std;

int main()
{
    std::ifstream params_f("sims/params.json");

    if (params_f)
    {
        // Parse JSON
        json p_top = json::parse(params_f);
        // cout << setw(4) << p_top << "\n";
        // Get sub dicts
        auto p_sys = p_top["sys"];
        cout << p_sys << "\n";
        // cout << p_sys["bw"].get<int>() << "\n";
        auto p_ssb = p_sys["ssb"];
        cout << p_ssb << "\n";
        auto p_bwp = p_sys["bwp"];
        cout << p_bwp << "\n";
    }
}
