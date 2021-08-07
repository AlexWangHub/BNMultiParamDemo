//
//  BNParamsModel.h
//  BNMultiParamDemo
//
//  Created by binbinwang on 2021/8/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BNParamsModel : NSObject

// required
@property (nonatomic, assign, readonly) int param1;
@property (nonatomic, assign, readonly) int param2;

// optional
@property (nonatomic, assign, readonly) int param3;
@property (nonatomic, assign, readonly) int param4;
@property (nonatomic, assign, readonly) int param5;
@property (nonatomic, assign, readonly) int param6;

// 业务自己构建初始化方法，不要使用 init\new 进行构建
+ (instancetype)new DISPATCH_UNAVAILABLE_MSG("Use initWith BUSINESS");
- (instancetype)init DISPATCH_UNAVAILABLE_MSG("Use initWith BUSINESS");

// 业务A
- (instancetype)initWithParam1:(int)param1
                        param2:(int)param2
                        param4:(int)param4;

// 业务B
- (instancetype)initWithParam1:(int)param1
                        param2:(int)param2
                        param5:(int)param5;

@end

NS_ASSUME_NONNULL_END
