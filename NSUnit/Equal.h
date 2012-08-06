//
//  Equal.h
//  NSUnit
//
//  Created by Jackson Harper on 8/5/12.
//  Copyright (c) 2012 Jackson Harper. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OperationProtocol.h"


@interface Equal : NSObject

+ (NSObject<OperationProtocol> *) to:(NSObject *) other;

@end