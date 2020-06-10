//
//  CollectionViewFlowLayout.swift
//  Unity-iPhone
//
//  Created by Minzi long on 12/4/18.
//

import UIKit

class CollectionViewFlowLayout: UICollectionViewFlowLayout {
	
	override func prepare() {
		minimumLineSpacing = 18
		sectionInset = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 0)
		
		
	}
	
	override func targetContentOffset(forProposedContentOffset proposedContentOffset: CGPoint, withScrollingVelocity velocity: CGPoint) -> CGPoint {
		let visibleX = proposedContentOffset.x
		let visibleY = proposedContentOffset.y
		let visibleW = collectionView?.bounds.size.width
		let visibleH = collectionView?.bounds.size.height
		
		let targetRect = CGRect(x: visibleX, y: visibleY, width: visibleW!, height: visibleH!)
		
		
		let centerX = proposedContentOffset.x + (collectionView?.bounds.size.width)!/2
		
		
		let attrArr = super.layoutAttributesForElements(in: targetRect)!
		
		var min_attr = attrArr[0]
		for attributes in attrArr {
			if (abs(attributes.center.x-centerX) < abs(min_attr.center.x-centerX)) {
				min_attr = attributes
			}
		}
		
		let ofsetX = min_attr.center.x - centerX
		return CGPoint(x: proposedContentOffset.x+ofsetX, y: proposedContentOffset.y)
	}
	
}
