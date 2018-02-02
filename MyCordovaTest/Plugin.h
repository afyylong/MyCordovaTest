//
//  Plugin.h
//  MyCordovaTest
//
//  Created by afyyong on 2018/1/29.
//  Copyright © 2018年 WenSi. All rights reserved.
//

#import <Cordova/CDVPlugin.h>

@interface Plugin : CDVPlugin
{
    UIImagePickerController *_imagePickerController;//相机
}

- (void)myMethod:(CDVInvokedUrlCommand *)command;


@end
