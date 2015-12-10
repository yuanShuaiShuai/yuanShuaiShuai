//
//  SXDetailModel.m
//  闪讯新闻
//
//  Created by 袁帅帅 on 15-1-24.
//  Copyright (c) 2015年 yusnShuaiShuaiDante. All rights reserved.
//

#import "SXDetailModel.h"
#import "SXDetailImgModel.h"
@implementation SXDetailModel

/** 便利构造器 */
+ (instancetype)detailWithDict:(NSDictionary *)dict
{
    SXDetailModel *detail = [[self alloc]init];
    detail.title = dict[@"title"];
    detail.ptime = dict[@"ptime"];
    detail.body = dict[@"body"];
    
    NSArray *imgArray = dict[@"img"];
    NSMutableArray *temArray = [NSMutableArray arrayWithCapacity:imgArray.count];
    
    for (NSDictionary *dict in imgArray) {
        SXDetailImgModel *imgModel = [SXDetailImgModel detailImgWithDict:dict];
        [temArray addObject:imgModel];
    }
    detail.img = temArray;
    
    
    return detail;
}

@end
