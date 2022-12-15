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

    Eigen::ArrayXXf aa(2, 2);

    aa << 1, 2,
        3, 4;

    std::cout << "(a > 0).all()   = " << (aa > 0).all() << std::endl;
    std::cout << "(a > 0).any()   = " << (aa > 0).any() << std::endl;
    std::cout << "(a > 0).count() = " << (aa > 0).count() << std::endl;
    std::cout << std::endl;
    std::cout << "(a > 2).all()   = " << (aa > 2).all() << std::endl;
    std::cout << "(a > 2).any()   = " << (aa > 2).any() << std::endl;
    std::cout << "(a > 2).count() = " << (aa > 2).count() << std::endl;

    Eigen::ArrayXXi A = Eigen::ArrayXXi::Random(4, 4).abs();
    std::cout << "Here is the initial matrix A:\n"
         << A << "\n";
    for (auto row : A.rowwise())
        std::sort(row.begin(), row.end());
    std::cout << "Here is the sorted matrix A:\n"
         << A << "\n";
}
