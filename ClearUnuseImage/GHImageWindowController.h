//
//  GHImageWindowController.h
//  ClearUnuseImage
//
//  Created by YongCheHui on 16/5/31.
//  Copyright © 2016年 ApesStudio. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface GHImageWindowController : NSWindowController<NSTableViewDataSource,NSTabViewDelegate>
@property(nonatomic,weak) IBOutlet NSTableView* tableView;
-(IBAction)deleteRows:(id)sender;
-(IBAction)deleteAll:(id)sender;
@end
