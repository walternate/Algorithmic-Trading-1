//
//  MomentumStrategy.h
//  Algorithmic Trading SENG3011
//
//  Created on 03/03/15.
//  Copyright (c) Revitpo. All rights reserved.
//


#ifndef __Algorithmic_Trading__MomentumStrategy__
#define __Algorithmic_Trading__MomentumStrategy__

namespace std {
    class MomentumStrategy;
}

#include "GlobalIncludes.h"

#include <map>

#include "Strategy.h"
#include "MomentumStrategyData.h"


namespace std {
    
    
    class MomentumStrategy : public Strategy {
        
    private:
        typedef Strategy super;
        
        map<string, MomentumStrategyData> companyData;
        
        int returnsInCalculation; //number of returns to use in equation (n from spec)
        double threshold;
        
    protected:
        virtual void nextTradeDay(TradeDay tradeDay);

    public:
        MomentumStrategy(Logger &logger, int returnsInCalculation, double threshold);
        
    };
    
}



#endif 

