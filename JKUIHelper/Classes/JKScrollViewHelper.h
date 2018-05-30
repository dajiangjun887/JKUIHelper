//
//  JKScrollViewHelper.h
//  JKUIHelper
//
//  Created by JackLee on 2018/5/30.
//

#import <Foundation/Foundation.h>

@interface JKScrollViewHelper : NSObject

/**
 初始化方法

 @param scrollView 滚动视图
 @param headerView 头视图
 @return helper对象
 */
- (id)initWithScrollView:(UIScrollView *)scrollView headerView:(UIView *)headerView;
/**
 滚动时透视图执行相关的放大操作

 @param scrollView 滚动视图
 @param insetHeight scrollView距离父视图顶部的缩进
 */
- (void)scrollViewDidSroll:(UIScrollView *)scrollView superViewInsetHeight:(CGFloat)insetHeight;

@end