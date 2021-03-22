//
// Created by itay_ on 22/03/2021.
//

#ifndef SEARCHALGORITHMS_SOLVER_H
#define SEARCHALGORITHMS_SOLVER_H

template <class P, class S> class Solver {
    virtual S solve(P problem)=0;
};


#endif //SEARCHALGORITHMS_SOLVER_H
