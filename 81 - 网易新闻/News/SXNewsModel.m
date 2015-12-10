//
//  SXNewsModel.m
//  闪讯新闻
//
//  Created by 袁 帅帅 on 15-10-22.
//  Copyright (c) 2015年 yuanShuaiShuai. All rights reserved.
//

#import "SXNewsModel.h"

@implementation SXNewsModel

+ (instancetype)newsModelWithDict:(NSDictionary *)dict
{
    SXNewsModel *model = [[self alloc]init];
    
    [model setValuesForKeysWithDictionary:dict];
    
    return model;
}

@end
