//
//  PrettyPrint.hpp
//  FindTheRoute
//
//  Created by Chawasit Tengtrairat on 4/23/2559 BE.
//  Copyright © 2559 cpe24. All rights reserved.
//

#ifndef PrettyPrint_hpp
#define PrettyPrint_hpp

#include <stdio.h>
#include <queue>
#include <string>
#include "Tag.hpp"
#include "Map.hpp"
#include "Node.hpp"
#include "Group.hpp"

class PrettyPrint {
public:
    void showTag(Tag*);
    void showRoute(std::queue<int>*);
    void showDebug(Tag*, Node*, Group*, Map*);
};

#endif /* PrettyPrint_hpp */