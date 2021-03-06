/*
 * Copyright 2017 Gil Barbosa Reis <gilzoide@gmail.com>
 * This file is part of libmosaic.
 * 
 * Libmosaic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Libmosaic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with libmosaic.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Any bugs should be reported to <gilzoide@gmail.com>
 */

/** @file mosaic.h
 * Main header file: include this and you're good to go!
 */

#ifndef __MOSAIC_H__
#define __MOSAIC_H__

#ifdef __cplusplus
extern "C" {
#endif

# include "mosaic/attr.h"
# include "mosaic/error.h"
# include "mosaic/image.h"
# include "mosaic/io.h"

#ifdef __cplusplus
}
#endif

/// Mosaic version string, generated by CMake build
#define MOSAIC_VERSION "@PROJECT_VERSION@"

#endif

