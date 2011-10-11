//
//  HBTransit.h
//  HoosBus
//
//  Created by Yaogang Lian on 10/26/09.
//  Copyright 2009 Happen Next. All rights reserved.
//

#import "BTTransit.h"


@interface HBTransit : BTTransit

- (NSArray *)filterStops:(NSArray *)ss;
- (BOOL)checkStop:(BTStop *)s;
- (NSMutableArray *)filterPrediction:(NSMutableArray *)p;
- (NSDictionary *)filterRoutes:(NSDictionary *)rs;

@end
