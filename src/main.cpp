#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::VectorXd;

int main()
{

    // MatrixXd m = MatrixXd::Random(3, 3);
    // m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
    // std::cout << "m =" << std::endl
    //           << m << std::endl;
    // VectorXd v(3);
    // v << 1, 2, 3;
    // std::cout << "v =" << std::endl
    //           << v << std::endl;
    // std::cout << "m * v =" << std::endl
    //           << m * v << std::endl;

    Eigen::Matrix2d a;
    a << 1, 2,
        3, 4;
    Eigen::MatrixXd b(2, 2);
    b << 2, 3,
        1, 4;
    std::cout << "a + b =\n"
              << a + b << std::endl;
    std::cout << "a - b =\n"
              << a - b << std::endl;
    std::cout << "Doing a += b;" << std::endl;
    a += b;
    std::cout << "Now a =\n"
              << a << std::endl;
    Eigen::Vector3d v(1, 2, 3);
    Eigen::Vector3d w(1, 0, 0);
    std::cout << "-v + w - v =\n"
              << -v + w - v << std::endl;

    Eigen::Matrix2d mat;
    mat << 1, 2,
        3, 4;
    std::cout << "mat =" << std::endl
              << mat << std::endl;
    std::cout << "Here is mat.sum():       " << mat.sum() << std::endl;
    std::cout << "Here is mat.prod():      " << mat.prod() << std::endl;
    std::cout << "Here is mat.mean():      " << mat.mean() << std::endl;
    std::cout << "Here is mat.minCoeff():  " << mat.minCoeff() << std::endl;
    std::cout << "Here is mat.maxCoeff():  " << mat.maxCoeff() << std::endl;
    std::cout << "Here is mat.trace():     " << mat.trace() << std::endl;
}
