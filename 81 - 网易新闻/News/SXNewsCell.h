//
//  SXNewsCell.h
//  闪讯资讯
//
//  Created by 袁 帅帅 on 15-10-22.
//  Copyright (c) 2015年 yuanShuaiShuai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SXNewsModel.h"

@interface SXNewsCell : UITableViewCell

@property(nonatomic,strong) SXNewsModel *NewsModel;



/**
 *  类方法返回可重用的id
 */
+ (NSString *)idForRow:(SXNewsModel *)NewsModel;

/**
 *  类方法返回行高
 */
+ (CGFloat)heightForRow:(SXNewsModel *)NewsModel;
@end
