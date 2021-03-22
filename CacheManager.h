//
// Created by itay_ on 22/03/2021.
//

#ifndef SEARCHALGORITHMS_CACHEMANAGER_H
#define SEARCHALGORITHMS_CACHEMANAGER_H
template <class P, class S> class CacheManager{
    virtual bool isExsit(P problem)=0;
    virtual P getSolution(P problem)=0;
    virtual void saveSolution(P problem, S solution)=0;
};
#endif //SEARCHALGORITHMS_CACHEMANAGER_H
