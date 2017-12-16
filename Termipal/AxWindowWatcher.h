//
//  AxWindowWatcher.h
//  Termipal
//
//  Created by Pauli Ojala on 15/12/2017.
//  Copyright © 2017 Pauli Olavi Ojala.
//
/*
 Termipal is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Cocoa/Cocoa.h>

/*
 Switches to the given app and starts watching its current focus window.
 The given attachedWindow will be displayed whenever the watched window is active.
 */

@interface AxWindowWatcher : NSObject

- (id)initWithAppBundleId:(NSString *)appId floaterWindow:(NSWindow *)window;

@property (readonly) NSRunningApplication *followedApp;
@property (assign) BOOL insideUserActionInFloater;

@end
