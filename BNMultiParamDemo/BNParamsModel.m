//
//  BNParamsModel.m
//  BNMultiParamDemo
//
//  Created by binbinwang on 2021/8/7.
//

#import "BNParamsModel.h"

@interface BNParamsModel ()

// required
@property (nonatomic, assign) int param1;
@property (nonatomic, assign) int param2;

// optional
@property (nonatomic, assign) int param3;
@property (nonatomic, assign) int param4;
@property (nonatomic, assign) int param5;
@property (nonatomic, assign) int param6;

@end

@implementation BNParamsModel

- (instancetype)_initWithParam1:(int)param1
                         param2:(int)param2 {
    if (self = [super init]) {
        _param1 = param1;
        _param2 = param2;
    }
    return self;
}

// 业务A
- (instancetype)initWithParam1:(int)param1
                         param2:(int)param2
                         param4:(int)param4 {
    self = [self _initWithParam1:param1 param2:param2];
    if (self) {
        _param4 = param4;
    }
    return self;
}

// 业务B
- (instancetype)initWithParam1:(int)param1
                         param2:(int)param2
                         param5:(int)param5 {
    self = [self _initWithParam1:param1 param2:param2];
    if (self) {
        _param5 = param5;
    }
    return self;
}

@end
