//
//  BNMultiParamViewController.h
//  BNMultiParamDemo
//
//  Created by binbinwang on 2021/8/7.
//

@class BNParamsModel;

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BNMultiParamViewController : UIViewController

- (instancetype)initWithParamModel:(BNParamsModel *)model;
// 业务自己构建初始化方法，不要使用 init\new 进行构建
+ (instancetype)new DISPATCH_UNAVAILABLE_MSG("Use initWithParamModel:");
- (instancetype)init DISPATCH_UNAVAILABLE_MSG("Use initWithParamModel:");

@end

NS_ASSUME_NONNULL_END
