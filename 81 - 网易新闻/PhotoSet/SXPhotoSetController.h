//
//  SXPhotoSetController.h
//  81 - 网易新闻
//
//  Created by 袁帅帅 on 15/12/3.
//  Copyright (c) 2015年 yuanshuaishuai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SXNewsModel.h"

@interface SXPhotoSetController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lblName;
@property (weak, nonatomic) IBOutlet UIImageView *imgPhotos;

@property(nonatomic,strong) SXNewsModel *newsModel;
@end
