/**
 * SPDX-FileCopyrightText: (C) 2006 Dominik Seichter <domseichter@web.de>
 * SPDX-FileCopyrightText: (C) 2021 Francesco Pretto <ceztko@gmail.com>
 * SPDX-License-Identifier: LGPL-2.0-or-later
 * SPDX-License-Identifier: MPL-2.0
 */

#ifndef PODOFO_MAIN_H
#define PODOFO_MAIN_H

#include "main/PdfDeclarations.h"
#include "main/PdfError.h"
#include "main/PdfCommon.h"
#include "main/PdfMath.h"
#include "main/PdfOperatorUtils.h"
#include "main/PdfArray.h"
#include "main/PdfCanvas.h"
#include "main/PdfColor.h"
#include "main/PdfContentStreamReader.h"
#include "main/PdfPostScriptTokenizer.h"
#include "main/PdfData.h"
#include "main/PdfDataProvider.h"
#include "main/PdfDate.h"
#include "main/PdfDictionary.h"
#include "main/PdfEncoding.h"
#include "main/PdfCMapEncoding.h"
#include "main/PdfEncodingFactory.h"
#include "main/PdfEncodingMapFactory.h"
#include "main/PdfDifferenceEncoding.h"
#include "main/PdfIdentityEncoding.h"
#include "main/PdfPredefinedEncoding.h"
#include "main/PdfEncrypt.h"
#include "main/PdfExtension.h"
#include "main/PdfStreamedObjectStream.h"
#include "main/PdfFilter.h"
#include "main/PdfStreamDeviceBase.h"
#include "main/PdfInputStream.h"
#include "main/PdfInputDevice.h"
#include "main/PdfCanvasInputDevice.h"
#include "main/PdfOutputStream.h"
#include "main/PdfOutputDevice.h"
#include "main/PdfStreamDevice.h"
#include "main/PdfImmediateWriter.h"
#include "main/PdfMemoryObjectStream.h"
#include "main/PdfName.h"
#include "main/PdfObject.h"
#include "main/PdfObjectStreamParser.h"
#include "main/PdfParser.h"
#include "main/PdfParserObject.h"
#include "main/PdfXRefStreamParserObject.h"
#include "main/PdfRect.h"
#include "main/PdfReference.h"
#include "main/PdfSigner.h"
#include "main/PdfObjectStream.h"
#include "main/PdfString.h"
#include "main/PdfTokenizer.h"
#include "main/PdfVariant.h"
#include "main/PdfIndirectObjectList.h"
#include "main/PdfWriter.h"
#include "main/PdfXRef.h"
#include "main/PdfXRefStream.h"
#include "main/PdfAcroForm.h"
#include "main/PdfAction.h"
#include "main/PdfAnnotation.h"
#include "main/PdfAnnotation_Types.h"
#include "main/PdfAnnotationWidget.h"
#include "main/PdfContents.h"
#include "main/PdfDestination.h"
#include "main/PdfDocument.h"
#include "main/PdfElement.h"
#include "main/PdfExtGState.h"
#include "main/PdfField.h"
#include "main/PdfTextBox.h"
#include "main/PdfButton.h"
#include "main/PdfCheckBox.h"
#include "main/PdfButton.h"
#include "main/PdfPushButton.h"
#include "main/PdfCheckBox.h"
#include "main/PdfRadioButton.h"
#include "main/PdfChoiceField.h"
#include "main/PdfComboBox.h"
#include "main/PdfListBox.h"
#include "main/PdfSignature.h"
#include "main/PdfFileSpec.h"
#include "main/PdfFontManager.h"
#include "main/PdfFontCIDTrueType.h"
#include "main/PdfFont.h"
#include "main/PdfFontMetricsStandard14.h"
#include "main/PdfFontMetricsFreetype.h"
#include "main/PdfFontMetrics.h"
#include "main/PdfFontMetricsObject.h"
#include "main/PdfFontSimple.h"
#include "main/PdfFontTrueType.h"
#include "main/PdfFontTrueTypeSubset.h"
#include "main/PdfFontType1.h"
#include "main/PdfFontType3.h"
#include "main/PdfImage.h"
#include "main/PdfInfo.h"
#include "main/PdfMemDocument.h"
#include "main/PdfNameTree.h"
#include "main/PdfOutlines.h"
#include "main/PdfPage.h"
#include "main/PdfPageTreeCache.h"
#include "main/PdfPageCollection.h"
#include "main/PdfPainterTextObject.h"
#include "main/PdfPainterPath.h"
#include "main/PdfPainter.h"
#include "main/PdfStreamedDocument.h"
#include "main/PdfXObject.h"
#include "main/PdfXObjectForm.h"
#include "main/PdfXObjectPostScript.h"

#endif // PODOFO_MAIN_H
