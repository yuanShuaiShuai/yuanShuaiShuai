//
//  SXTabBar.h
//  闪讯新闻
//
//  Created by 袁 帅帅 on 15/4/9.
//  Copyright (c) 2015年 yuanShuaiShuai. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SXTabBarDelegate <NSObject>

@optional

- (void)ChangSelIndexForm:(NSInteger)from to:(NSInteger)to;

@end


@interface SXTabBar : UIView

@property (nonatomic,weak) id<SXTabBarDelegate> delegate;

- (void)addImageView;
- (void)addBarButtonWithNorName:(NSString *)nor andDisName:(NSString *)dis andTitle:(NSString *)title;

@end
