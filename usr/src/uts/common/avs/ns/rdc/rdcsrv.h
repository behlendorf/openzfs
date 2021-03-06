/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2008 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _RDCSRV_H
#define	_RDCSRV_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef _KERNEL


typedef struct rdc_disptab_s {
	void	(*dispfn)();
	int	clone;
} rdc_disptab_t;

typedef struct rdcsrv_s {
	rdc_disptab_t	*disptab;
	int		nprocs;
} rdcsrv_t;

extern void rdcsrv_noproc(void);
extern void rdcsrv_unload(void);
extern int rdcsrv_load(file_t *, rdcsrv_t *, rdc_svc_args_t *, int);

#endif	/* _KERNEL */

#ifdef	__cplusplus
}
#endif

#endif	/* _RDCSRV_H */
