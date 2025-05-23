/***********************************************************************//** 
 * \file  gptb.h
 * \brief  Enhanced timer
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author	<th>Description
 * <tr><td> 2022-1-17 <td>V0.0 <td>LJY		<td>initial
 * </table>
 * *********************************************************************
*/


#ifndef _GPTB_H_
#define _GPTB_H_

#include "stdint.h"
#include "common.h"
#include "csp.h"
#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t gGptb0Prd;;
extern uint32_t gGptb1Prd;;

typedef struct csi_gptb_config csi_gptb_config_t;
struct csi_gptb_config {
    uint8_t		byWorkmod;          //Count or capture
	uint8_t     byCountingMode;    //csi_gptb_cntmd_eby
	uint8_t     byOneshotMode;     //Single or continuous
	uint8_t     byStartSrc ;
	uint8_t     byPscld;
	uint8_t		byDutyCycle;		 //TIMER PWM OUTPUT duty cycle	
	uint8_t     byCaptureCapLden;
	uint8_t     byCaptureRearm;
	uint8_t     byCaptureStopWrap;
	uint8_t     byCaptureLdaret;
	uint8_t     byCaptureLdbret;

	uint32_t	wFreq;				 //TIMER PWM OUTPUT frequency 
	uint32_t    wInt;
};


typedef struct csi_gptb_pwmconfig  csi_gptb_pwmconfig_t;
struct csi_gptb_pwmconfig {
	uint8_t		byWorkmod;          //Count or capture
	uint8_t     byCountingMode;    //csi_gptb_cntmd_e
	uint8_t     byOneshotMode;     //Single or continuous
	uint8_t     byStartSrc ;
	uint8_t     byPscld;
	uint8_t		byDutyCycle;		 //TIMER PWM OUTPUT duty cycle	
	uint32_t	wFreq;				 //TIMER PWM OUTPUT frequency 
	uint32_t    wInt;
};

typedef struct csi_gptb_captureconfig  csi_gptb_captureconfig_t;
struct csi_gptb_captureconfig {
	uint8_t		byWorkmod;          //Count or capture
	uint8_t     byCountingMode;     //csi_gptb_cntmd_e
	uint8_t     byOneshotMode;      //Single or continuous
	uint8_t     byStartSrc ;
	uint8_t     byPscld;
	uint8_t		byDutyCycle;		 //TIMER PWM OUTPUT duty cycle	
 	uint8_t     byCaptureCapLden;
	uint8_t		byCapSrcMode;        //CAPMODE_SEL
	uint8_t     byCaptureRearm;
	uint8_t     byCaptureCapmd;
	uint8_t     byCaptureStopWrap;
	uint8_t     byCaptureLdaret;
	uint8_t     byCaptureLdbret;
	uint8_t     byCaptureLdaaret;
	uint8_t     byCaptureLdbaret;
	uint32_t    wInt;
};


typedef struct csi_gptb_pwmchannel_config      csi_gptb_pwmchannel_config_t;
struct csi_gptb_pwmchannel_config {
	
    uint8_t		byActionZro;          //
	uint8_t     byActionPrd;          //
	uint8_t     byActionC1u;          //
    uint8_t     byActionC1d;          //
	uint8_t     byActionC2u;          //
	uint8_t     byActionC2d;          //
	uint8_t     byActionT1u;          //
	uint8_t     byActionT1d;          //
	uint8_t     byActionT2u;          //
	uint8_t     byActionT2d;          //	
    uint8_t     byChoiceC1sel;
	uint8_t     byChoiceC2sel;
};

typedef struct csi_gptb_deadzone_config   csi_gptb_deadzone_config_t;
struct  csi_gptb_deadzone_config
{	
	uint8_t       byChxOuselS1S0      ;   //
	uint8_t       byChxPolarityS3S2   ;   //
	uint8_t       byChxInselS5S4      ;   //
	uint8_t       byChxOutSwapS8S7    ;   //		
	uint8_t       byDcksel;
	uint8_t       byChaDedb;
	uint8_t       byChbDedb;
	uint8_t       byChcDedb;
	uint16_t      hwDpsc;                 //
	uint16_t      hwRisingEdgeTime ;  //
	uint16_t      hwFallingEdgeTime;  //
};



typedef struct csi_gptb_Chopper_config   csi_gptb_Chopper_config_t;
struct csi_gptb_Chopper_config
{
    uint8_t  byOspwth             ;                
	uint8_t  byCdiv               ;                
	uint8_t  byCduty              ;              
	uint8_t  byCasel              ;              
	uint8_t  chen            ;              

};



typedef enum{
	GPTBCHAX = 0x1,
	GPTBCHAY,
//	GPTBCHBX,
//	GPTBCHBY,
//	GPTBCHCX,
//	GPTBCHCY
}csi_gptb_chx_e;

typedef enum{
	GPTB_EMCOAX =0,
	GPTB_EMCOBX,
	GPTB_EMCOAY
}csi_gptb_osrchx_e;

typedef struct csi_gptb_emergency_   csi_gptb_emergency_config_t;
struct csi_gptb_emergency_
{
    uint8_t  byEpxInt ;
	uint8_t  byPolEbix;
    uint8_t	 byEpx;
	uint8_t  byEpxLckmd;
	uint8_t  byFltpace0;
	uint8_t  byOrl0;
	uint8_t  byOrl1;
	uint8_t  byOsrshdw;
};

typedef struct  csi_gptb_Event_trigger_config   csi_gptb_Event_trigger_config_t;
struct  csi_gptb_Event_trigger_config{
	uint8_t   trg0sel  ;
	uint8_t   trg1sel  ;
	uint8_t   trg2sel  ;
	uint8_t   trg3sel  ;	
	uint8_t   trg0en   ;
	uint8_t   trg1en   ;
	uint8_t   trg2en   ;
	uint8_t   trg3en   ;	
	uint8_t   cnt0initfrc;
	uint8_t   cnt1initfrc;
	uint8_t   cnt2initfrc;
	uint8_t   cnt3initfrc;
	uint8_t   cnt0initen;
	uint8_t   cnt1initen;
	uint8_t   cnt2initen;
	uint8_t   cnt3initen;
	uint8_t   trg0prd ;
	uint8_t   trg1prd ;
	uint8_t   trg2prd ;
	uint8_t   trg3prd ;
	uint8_t   cnt0init;
	uint8_t   cnt1init;
	uint8_t   cnt2init;
	uint8_t   cnt3init;
	
	uint8_t fltipscld;
	uint8_t fltckprs;
	uint8_t srcsel;
	uint8_t blkinv;
	uint8_t alignmd;
	uint8_t crossmd;
	uint16_t offset;
	uint16_t window;
	
};

typedef struct csi_gptb_Global_load_control_config    csi_gptb_Global_load_control_config_t;
struct csi_gptb_Global_load_control_config{
	
    bool bGlden;
	bool bOstmd;
	uint8_t bGldprd;	
    uint8_t byGldmd;
	uint8_t byGldcnt;

};

typedef enum {
	
	GPTB_PRDR=0,	
	GPTB_CMPA,
	GPTB_CMPB,
	GPTB_AQCR1,
	GPTB_AQCR2,
	GPTB_AQCSF,
}csi_gptb_Global_load_gldcfg;



/// \struct csi_gptb_filter_config_t
/// \brief  gptb sync trigger filter parameter configuration, open to users  
typedef struct {
    uint8_t		byFiltSrc;			//filter input signal source
	uint8_t		byWinInv;			//window inversion 
	uint8_t		byWinAlign;			//window alignment 
	uint8_t		byWinCross;			//window cross
	uint16_t	byWinOffset;		//window offset
	uint16_t 	byWinWidth;			//window width				
} csi_gptb_filter_config_t;

typedef struct {
	uint8_t		byPrdr;			
	uint8_t		byCmpa;			
	uint8_t		byCmpb;			
	uint8_t		byGld2;			
	uint8_t 	byRssr;		          
	uint8_t 	byEmslclr;
	uint8_t 	byEmhlclr;
    uint8_t 	byEmicr;
	uint8_t 	byEmfrcr;
    uint8_t 	byAqosf;
	uint8_t 	byAqcsf;		
} csi_gptb_reglk_config_t;

typedef enum
{
	GPTB_CAPTURE	= 0,		
    GPTB_WAVE 	= 1		
}csi_gptb_wave_e;

typedef enum {
	GPTB_SW = 0,
	GPTB_SYNC
}csi_gptb_stmd_e;

typedef enum{
	GPTB_LDPSCR_ZRO = 0,
	GPTB_LDPSCR_PRD,
	GPTB_LDPSCR_ZROPRD
}csi_gptb_ldpscr_e;

typedef enum {
	GPTB_UPCNT = 0,
	GPTB_DNCNT,
	GPTB_UPDNCNT
}csi_gptb_cntmd_e;

typedef enum{
	GPTB_STP_ST_HZ = 0,
	GPTB_STP_ST_LOW
}csi_gptb_stpst_e;

typedef enum{
	GPTB_OP_CONT = 0,
	GPTB_OP_OT
}csi_gptb_opmd_e;

typedef enum{
    GPTB_CHANNEL_1=1,
	GPTB_CHANNEL_2

}csi_gptb_channel_e;

typedef enum {
	GPTB_NA = 0,
	GPTB_LO,
	GPTB_HI,
	GPTB_TG	
}csi_gptb_action_e;

typedef enum{
	GPTB_SHADOW    = 0,    
	GPTB_IMMEDIATE 
}csi_gptb_ldmd_e;

typedef enum{
	GPTB_LDMD_NEVER = 0,
	GPTB_LDMD_ZRO,
	GPTB_LDMD_PRD,
	GPTB_LDMD_LD_SYNC = 4,
}csi_gptb_shdwldmd_e;

typedef enum{
    GPTB_COMPA=1,
	GPTB_COMPB

}csi_gptb_comp_e;

typedef enum{
    GPTB_DBCR =0,
	GPTB_DBDTR,
	GPTB_DBDTF,
	GPTB_DCKPSC		
}csi_gptb_dbldr_e;

typedef enum{
	GPTB_DB_IMMEDIATE =0,
	GPTB_DB_SHADOW      
}csi_gptb_dbldmd_e;

typedef enum{
	GPTB_DBLDMD_NEVER = 0,
	GPTB_DBLDMD_ZRO,
	GPTB_DBLDMD_PRD,
	GPTB_DBLDMD_ZRO_PRD	
}csi_gptb_shdwdbldmd_e;

typedef enum {
	GPTB_POLARITY_HIGH = 0,
	GPTB_POLARITY_LOW
}csi_gptb_polarity_t;



typedef enum{
	GPTB_INTSRC_NONE   = 0x0,
	GPTB_INTSRC_TRGEV0 = 0x1,
	GPTB_INTSRC_TRGEV1 = 0x2,

	GPTB_INTSRC_CAPLD0 = 0x1 << 4,
	GPTB_INTSRC_CAPLD1 = 0x1 << 5,
	GPTB_INTSRC_CAPLD2 = 0x1 << 6,
	GPTB_INTSRC_CAPLD3 = 0x1 << 7,
	GPTB_INTSRC_CAU = 0x1 << 8,
	GPTB_INTSRC_CAD = 0x1 << 9,
	GPTB_INTSRC_CBU = 0x1 << 10,
	GPTB_INTSRC_CBD = 0x1 << 11,
	
	GPTB_INTSRC_PEND = 0x1 << 16	
}csi_gptb_int_e;

typedef enum{
	GPTB_TRGO_0_SEL = 0,
	GPTB_TRGO_1_SEL
}csi_gptb_syncrout_e;

/**
 * \enum     csi_gptb_trgin_e
 * \brief    GPTB sync trigger input 
 */
typedef enum{
	GPTB_TRG_SYNCEN0	= 0,	//start	up or reset count			
	GPTB_TRG_SYNCEN1,			//reg updata				
	GPTB_TRG_SYNCEN2,			//capture				
	GPTB_TRG_SYNCEN3,			//			
	GPTB_TRG_SYNCEN4,			//	
	GPTB_TRG_SYNCEN5,			//				
}csi_gptb_trgin_e;

typedef enum {
	GPTB_TRGSRC_DIS		= 0,
	GPTB_TRGSRC_ZRO,
	GPTB_TRGSRC_PRD,
	GPTB_TRGSRC_ZRO_PRD,
	GPTB_TRGSRC_CAU,
	GPTB_TRGSRC_CAD,
	GPTB_TRGSRC_CBU,
	GPTB_TRGSRC_CBD,
//	GPTB_TRGSRC_CCU,
//	GPTB_TRGSRC_CCD,
//	GPTB_TRGSRC_CDU,
//	GPTB_TRGSRC_CDD,
	GPTB_TRGSRC_EX      =0x0c,
	GPTB_TRGSRC_EP0,
	GPTB_TRGSRC_EP1,
	GPTB_TRGSRC_EP2,

}csi_gptb_trgsrc_e;

/**
 * \enum	csi_gptb_trgout_e
 * \brief   gptb event trigger out port
 */
typedef enum{
	GPTB_TRGOUT0		= 0,	
	GPTB_TRGOUT1,				
}csi_gptb_trgout_e;

typedef enum {
	GPTB_AQCSF_NONE=0,
	GPTB_AQCSF_L,
	GPTB_AQCSF_H,
	GPTB_AQCSF_NONE1
}csi_gptb_aqcsf_e;

typedef enum {
	GPTB_AQCSF_NOW=0,
	GPTB_AQCSF_ZRO,
	GPTB_AQCSF_PRD,
	GPTB_AQCSF_ZRO_PRD
}csi_gptb_aqosf_e;

typedef enum {
	GPTB_CH_1 = 0,
	GPTB_CH_2,
//	GPTB_CH_3,
//	GPTB_CH_4
}csi_gptb_chtype_e;

typedef enum{
	GPTB_STP_HZ = 0,
	GPTB_STP_L
}csi_gptb_stopst_e;

typedef enum{
	GPTB_CAP_CONT = 0,
	GPTB_CAP_OT
}csi_gptb_capmd_e;

#define GPTB_EVENT_SLCK_EBI(n)  n
typedef enum{
	GPTB_EVENT_SLCK = 0,
	GPTB_EVENT_HLCK,
}csi_gptb_event_e;

#define GPTB_ORLx_EBI0  1<<0
#define GPTB_ORLx_EBI1  1<<1
#define	GPTB_ORLx_EBI2  1<<2
#define	GPTB_ORLx_EBI3  1<<3

typedef enum {
	GPTB_EBI0 = 1,
	GPTB_EBI1,
	GPTB_EBI2,
	GPTB_EBI3,
	GPTB_LVD,
	GPTB_ORL0 = 0x0e,
	GPTB_ORL1,
}csi_gptb_ebi_e;

typedef enum {
	GPTB_EBI_POL_H = 0,
	GPTB_EBI_POL_L
}csi_gptb_ebipol_e;

typedef enum{
	GPTB_EP_DIS = 0,
	GPTB_EP_SLCK,
	GPTB_EP_HLCK
}csi_gptb_ep_lckmd_e;

typedef enum {
	GPTB_EMOUT_HZ,
	GPTB_EMOUT_H,
	GPTB_EMOUT_L,
	GPTB_EMOUT_NONE
}csi_gptb_emout_e;

typedef enum{
	GPTB_EP0 = 0,
	GPTB_EP1,
	GPTB_EP2,
	GPTB_EP3,
}csi_gptb_ep_e;

typedef enum{
	GPTB_EPFLT0_DIS = 0,
	GPTB_EPFLT0_2P,
	GPTB_EPFLT0_3P,
	GPTB_EPFLT0_4P
}csi_gptb_epflt0_e;
typedef enum{
	GPTB_EPFLT1_1P = 0,
	GPTB_EPFLT1_2P,
	GPTB_EPFLT1_3P,
	GPTB_EPFLT1_4P
}csi_gptb_epflt1_e;

typedef struct {
	csi_gptb_emout_e eChaxOut;
	csi_gptb_emout_e eChayOut;
	csi_gptb_emout_e eChbxOut;
	csi_gptb_emout_e eChbyOut;
//	csi_gptb_emout_e eChcxOut;
//	csi_gptb_emout_e eChcyOut;
//	csi_gptb_emout_e eChdOut;
}csi_gptb_em_out_e;

/****** GPTB Event *****/
typedef enum {
    GPTB_EVENT_HARDLOCK = 0,      
    GPTB_EVENT_SOFTLOCK,         
    GPTB_EVENT_ERROR                     
} csi_gptb_event_t;

typedef enum{
	GPTB_INTSRC_EP0 = (0x01ul << 0),
	GPTB_INTSRC_EP1 = (0x01ul << 1),
	GPTB_INTSRC_EP2 = (0x01ul << 2),
	GPTB_INTSRC_EP3 = (0x01ul << 3),
	GPTB_INTSRC_CPUF= (0x01ul << 8),
	GPTB_INTSRC_MEMF= (0x01ul << 9),
	GPTB_INTSRC_EOMF= (0x01ul << 10)	
}csi_gptb_emint_e;

/**
 * \enum     csi_gptb_arearm_e
 * \brief    GPTB hardware auto rearm 
 */
typedef enum{
	GPTB_AUTO_REARM_DIS 	= 0,	//disable auto rearm
	GPTB_AUTO_REARM_ZRO,			//CNT = ZRO auto rearm
	GPTB_AUTO_REARM_PRD,			//CNT = PRD auto rearm
	GPTB_AUTO_REARM_ZRO_PRD		//CNT = PRD or PRD auto rearm
}csi_gptb_arearm_e;

/**
 * \enum     csi_gptb_trgmode_e
 * \brief    gptb sync trigger mode 
 */
typedef enum{
	GPTB_TRG_CONTINU		= 0,	
	GPTB_TRG_ONCE								
}csi_gptb_trgmode_e;

/**
 * \enum	csi_gptb_filter_insrc_e
 * \brief   gptb filter input signal source
 */
typedef enum{
	GPTB_FILT_DIS		= 0,	//filter disable
	GPTB_FILT_SYNCIN0,			//filter input syncin0
	GPTB_FILT_SYNCIN1,			//filter input syncin1	
	GPTB_FILT_SYNCIN2,			//filter input syncin2
	GPTB_FILT_SYNCIN3,			//filter input syncin3	
	GPTB_FILT_SYNCIN4,			//filter input syncin4
	GPTB_FILT_SYNCIN5,			//filter input syncin5		
}csi_gptb_filter_insrc_e;


/**
 * \enum	csi_gptb_cntinit_e
 * \brief   gptb filter input signal source
 */
typedef enum{
	GPTB_CNT0INIT		= 0,	//filter input syncin0
	GPTB_CNT1INIT,				//filter input syncin1	
	GPTB_CNT2INIT,				//filter input syncin2
	GPTB_CNT3INIT,				//filter input syncin3	
}csi_gptb_cntinit_e;

typedef enum{
	GPTB_EVTRG_Disable 	= 0,
	GPTB_EVTRG_Enable
}csi_gptb_evtrg_e;

typedef enum{
	GPTB_EVTRG_trigger_Disable = 0,
	GPTB_Enable_trigger_start
}csi_gptb_evtrg_trigger_e;

typedef enum {
	GPTB_DB_TCLK = 0,
	GPTB_DB_DPSC
}csi_gptb_dbclksrc_e;

typedef enum {
	GPTB_DB_AR_BF = 0,
	GPTB_DB_BR_BF
}csi_gptb_dedb_e;

typedef enum {
	GPTB_DBOUT_DIS = 0,
	GPTB_DBOUT_BF,
	GPTB_DBOUT_AR,
	GPTB_DBOUT_AR_BF
}csi_gptb_db_outsel_e;

typedef enum {
	GPTB_DB_POL_DIS = 0,
	GPTB_DB_POL_A,
	GPTB_DB_POL_B,
	GPTB_DB_POL_AB
}csi_gptb_db_pol_e;

typedef enum {
	GPTB_DBCHAIN_AR_AF = 0,
	GPTB_DBCHAIN_BR_AF,
	GPTB_DBCHAIN_AR_BF,
	GPTB_DBCHAIN_BR_BF
}csi_gptb_dbcha_insel_e;

typedef enum {
	GPTB_DBCHAOUT_OUTA_A_OUTB_B = 0,
	GPTB_DBCHAOUT_OUTA_B_OUTB_B,
	GPTB_DBCHAOUT_OUTA_A_OUTB_A,
	GPTB_DBCHAOUT_OUTA_B_OUTB_A
}csi_gptb_dbcha_outswap_e;


/**
 \brief  CLDCFG loading
 \param  ptGptbBase    	pointer of gpta register structure
 \param  bENABLE        ENABLE or DISABLE
 \return CSI_OK
*/
csi_error_t csi_gptb_gldcfg(csp_gptb_t *ptGptbBase ,csi_gptb_Global_load_gldcfg Glo,bool bENABLE);

/** \brief Channel AQLDR configuration
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eLdmd: refer to csi_gptb_ldmd_e
 *  \param[in] eShdwldmd: refer to csi_gptb_shdwldmd_e
 *  \param[in] eChannel: refer to csi_gptb_channel_e
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_channel_aqload_config(csp_gptb_t *ptGptbBase, csi_gptb_ldmd_e eLdmd, csi_gptb_shdwldmd_e eShdwldmd ,csi_gptb_channel_e eChannel);

/** \brief Channel CMPLDR configuration
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] eLdmd: refer to csi_gptb_ldmd_e
 *  \param[in] eShdwldmd: refer to csi_gptb_shdwldmd_e
 *  \param[in] eChannel: refer to csi_gptb_camp_e
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_channel_cmpload_config(csp_gptb_t *ptGptbBase, csi_gptb_ldmd_e eLdmd, csi_gptb_shdwldmd_e eShdwldmd ,csi_gptb_comp_e eChannel);

/** 
  \brief start gptb
  \param ptGptbBase:  pointer of bt register structure
  \return none
 */ 
void csi_gptb_start(csp_gptb_t *ptGptbBase);

/**
 \brief SW stop GPTB counter
 \param ptGptbBase    pointer of gptb register structure
 \return none
*/
void csi_gptb_stop(csp_gptb_t *ptGptbBase);

/**
 \brief set GPTB start mode. 
 \param ptGptbBase    pointer of gptb register structure
 \return eMode ：GPTB_SW/GPTB_SYNC
*/
void csi_gptb_set_start_mode(csp_gptb_t *ptGptbBase, csi_gptb_stmd_e eMode);

/**
 \brief set GPTB operation mode
 \param ptGptbBase    pointer of gptb register structure
 \param eMode 	 GPTB_OP_CONT/GPTB_OP_OT
*/
void csi_gptb_set_os_mode(csp_gptb_t *ptGptbBase, csi_gptb_opmd_e eMode);

/**
 \brief set GPTB stop status
 \param ptGptbBase    pointer of gptb register structure
 \param eSt 	 GPTB_STP_HZ/GPTB_STP_LOW
*/
void csi_gptb_set_stop_st(csp_gptb_t *ptGptbBase, csi_gptb_stpst_e eSt);


/**
 \brief get counter period to calculate the duty cycle. 
 \param ptGptbBase    pointer of gptb register structure
 \return counter period (reg data)
*/
uint16_t csi_gptb_get_prdr(csp_gptb_t *ptGptbBase);

/** \brief set gptb phsr  
 * 
 *  \param[in] ptGptbBase ：pointer of gptb register structure
 *  \param[in] hwPhsr  :    phsr value
*   \param[in] bEnable :    ENABLE/DISABLE
 *  \return none
 */
void csi_gptb_set_phsr(csp_gptb_t *ptGptbBase, uint16_t hwPhsr,bool bEnable);

/** \brief  update gptb PRDR and CMPx reg value
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] eComp: select which COMP to set(COMPA or COMPB)
 *  \param[in] hwPrdr: gptb PRDR reg  value
 *  \param[in] hwCmp: gptb COMP reg value
 *  \return none
 */
csi_error_t csi_gptb_prdr_cmp_update(csp_gptb_t *ptGptbBase,csi_gptb_comp_e eComp, uint16_t hwPrdr, uint16_t hwCmp);

/** \brief change gptb output dutycycle. 
 * 
 *  \param[in] ptGptbBase :    pointer of gptb register structure
 *  \param[in] eCh  :          refer to csi_gptb_camp_e
 *	\param[in] wActiveTime :   cmpx data to be set directly
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_change_ch_duty(csp_gptb_t *ptGptbBase, csi_gptb_comp_e eCh, uint32_t wActiveTime);

/** \brief software force lock
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eEp: refer to csi_gptb_ep_e 
 *  \return none
 */
void csi_gptb_force_em(csp_gptb_t *ptGptbBase, csi_gptb_ep_e eEp);
/** \brief clear harklock status
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eEp: external emergency input: csi_gptb_ep_e  
 *  \return none               
 */
void csi_gptb_clr_hdlck(csp_gptb_t *ptGptbBase, csi_gptb_ep_e eEp);
/**
 \brief get 	 softlock status
 \param ptGptb    pointer of gptb register structure
 \return uint8_t 0b_ _ _ _ _ _ _ _
*/
uint8_t csi_gptb_get_sftlck_st(csp_gptb_t *ptGptbBase);

/** \brief clear softlock status
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eEp: external emergency input: csi_gptb_ep_e
 *  \return none
 */
void csp_gptb_clr_sftlck(csp_gptb_t *ptGptbBase, csi_gptb_ep_e eEp);

/** \brief enable/disable ept in debug mode
 * 
 *  \param[in]  ptGptbBase      pointer of gptb register structure
 *  \param[in]   bEnable		ENABLE/DISABLE
 *  \return none
 */
void csi_gptb_debug_enable(csp_gptb_t *ptGptbBase, bool bEnable);

/** \brief enable/disable gptb emergencyinterruption
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eEmint: refer to csi_gptb_emint_e
 *  \return none
 */
void csi_gptb_emint_en(csp_gptb_t *ptGptbBase, csi_gptb_emint_e eEmint);

/** \brief enable/disable gptb out trigger 
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eTrgOut: evtrg out port(0~1)
 *  \param[in] bEnable: ENABLE/DISABLE
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_evtrg_enable(csp_gptb_t *ptGptbBase, csi_gptb_trgout_e eTrgOut, bool bEnable);

/** \brief   One time software output 
 * 
 *  \param[in]   ptGptbBase: pointer of gptb register structure 
 *  \param[in]   hwCh:  GPTB_OSTSFA/GPTB_OSTSFB
 *  \param[in]   eAction: refer to csi_gptb_action_e
 *  \return error code \ref csi_error_t
*/
csi_error_t csi_gptb_onetimesoftware_output(csp_gptb_t *ptGptbBase, uint16_t hwCh, csi_gptb_action_e eAction);

/** \brief  Continuous software waveform loading control
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eLoadtime:    refer to csi_gptb_aqosf_e
 *  \return  none
 */
void csi_gptb_aqcsfload_config(csp_gptb_t *ptGptbBase, csi_gptb_aqosf_e eLoadtime);

/** \brief gptb  int  config  
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eInt:     refer to to csi_gptb_int_e
 *  \param[in] bEnable:  ENABLE/DISABLE
 *  \return CSI_OK;
 */
void csi_gptb_int_enable(csp_gptb_t *ptGptbBase, csi_gptb_int_e eInt, bool bEnable);

 /** \brief Continuous software waveform control
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] byCh: refer to csi_gptb_channel_e
 *  \param[in] bEnable: refer to  csi_ept_aqosf_e
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_continuous_software_waveform(csp_gptb_t *ptGptbBase, csi_gptb_channel_e byCh, csi_gptb_aqcsf_e bEnable);



/** \brief wave configuration
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] ptgptbPwmCfg: refer to csi_ept_pwmconfig_t
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_wave_init(csp_gptb_t *ptGptbBase, csi_gptb_pwmconfig_t *ptgptbPwmCfg);

/** \brief initialize gptb data structure
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] wTimeOut: the timeout for gptb, unit: us, 20us < wTimeOut < 3S
 *  \return error code \ref csi_error_t
 */ 
csi_error_t csi_gptb_timer_init(csp_gptb_t *ptGptbBase, uint32_t wTimeOut);

/** \brief set gptb count mode
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eCntMode: gptb count mode, one pulse/continuous
 *  \return none
 */ 
void csi_gptb_count_mode(csp_gptb_t *ptGptbBase, csi_gptb_opmd_e eCntMode);

/** \brief enable/disable gptb burst 
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] byCgsrc:cgr src 
 *  \param[in] byCgflt:cfg flt
 *  \param[in] bEnable: ENABLE/DISABLE
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_burst_enable(csp_gptb_t *ptGptbBase,uint8_t byCgsrc,uint8_t byCgflt, bool bEnable);


//csi_error_t csi_gptb_config_init(csp_gptb_t *ptGptbBase, csi_gptb_config_t *ptgptbPwmCfg);

/** \brief Channel configuration
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] tPwmCfg: refer to csi_ept_pwmchannel_config_t
 *  \param[in] eChannel: Channel label
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_channel_config(csp_gptb_t *ptGptbBase, csi_gptb_pwmchannel_config_t *tPwmCfg, csi_gptb_channel_e channel);

/** \brief DeadZoneTime configuration loading 
 *  
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eDbldr: refer to csi_gptb_dbldr_e
 *  \param[in] eDbldmd: refer to csi_gptb_dbldmd_e
 *  \param[in] eShdwdbldmd: refer to csi_gptb_shdwdbldmd_e
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_dbload_config(csp_gptb_t *ptGptbBase, csi_gptb_dbldr_e eDbldr,csi_gptb_dbldmd_e eDbldmd,csi_gptb_shdwdbldmd_e eShdwdbldmd);


//csi_error_t csi_gptb_dbcr_config(csp_gptb_t *ptGptbBase, csi_gptb_deadzone_config_t *tCfg);

/** \brief channelmode configuration 
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] tCfg: refer to csi_ept_deadzone_config_t
 *  \param[in] eChannel: refer to csi_ept_channel_e
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_channelmode_config(csp_gptb_t *ptGptbBase,csi_gptb_deadzone_config_t *tCfg,csi_gptb_channel_e byCh);

/** \brief State of emergency configuration 
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] tCfg: refer to csi_ept_emergency_config_t
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_emergency_cfg(csp_gptb_t *ptGptbBase, csi_gptb_emergency_config_t *tCfg);

/** \brief State of emergency configuration 
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eOsrch: refer to csi_gptb_osrchx_e
 *  \param[in] eEmout: refer to csi_gptb_emout_e
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_emergency_pinxout(csp_gptb_t *ptGptbBase,csi_gptb_osrchx_e  eOsrch ,csi_gptb_emout_e eEmout);

/** \brief capture configuration
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] ptgptbPwmCfg: refer to csi_ept_captureconfig_t
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_capture_init(csp_gptb_t *ptGptbBase, csi_gptb_captureconfig_t *ptgptbPwmCfg);

/** \brief gptb sync input evtrg config  
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eTrgin: gptb sync evtrg input channel(0~6)
 *  \param[in] eTrgMode: gptb sync evtrg mode, continuous/once
 *  \param[in] eAutoRearm: refer to csi_gptb_arearm_e 
 *  \return none
 */
void csi_gptb_set_sync(csp_gptb_t *ptGptbBase, csi_gptb_trgin_e eTrgIn, csi_gptb_trgmode_e eTrgMode, csi_gptb_arearm_e eAutoRearm);

/** \brief DeadZoneTime configuration 
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] tCfg: refer to csi_ept_deadzone_config_t
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_dz_config(csp_gptb_t *ptGptbBase, csi_gptb_deadzone_config_t *tCfg);

/** \brief DeadZoneTime configuration 
 * 
 *  \param[in] ptGptbBase: pointer of ept register structure
 *  \param[in] tCfg: refer to csi_ept_deadzone_config_t
 *  \return error code \ref csi_error_t
 */
void csi_gptb_global_config(csp_gptb_t *ptGptbBase,csi_gptb_Global_load_control_config_t *Global);

/** \brief rearm  loading
 * 
 *  \param[in] ptGptbBase pointer of gptb register structure
 *  \return none
*/
void csi_gptb_global_rearm(csp_gptb_t *ptGptbBase);

/** \brief Software trigger loading
 * 
 *  \param[in] ptGptbBase pointer of gptb register structure
 *  \return none
*/
void csi_gptb_global_sw(csp_gptb_t *ptGptbBase);

/** \brief gptb extsync input select
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eTrgin: gptb sync evtrg input channel(0~6)
 *  \param[in] byTrgChx: trgxsel channel(0~1)
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_set_extsync_chnl(csp_gptb_t *ptGptbBase, csi_gptb_trgin_e eTrgIn, csi_gptb_syncrout_e byTrgChx);

/** \brief rearm gptb sync evtrg  
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] eTrgin: gptb sync evtrg input channel(0~6)
 *  \return none
 */
void csi_gptb_rearm_sync(csp_gptb_t *ptGptbBase,csi_gptb_trgin_e eTrgin);

/** \brief gptb evtrg output config
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] byTrgOut: evtrg out port(0~1)
 *  \param[in] eTrgSrc: evtrg source(1~15) 
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_set_evtrg(csp_gptb_t *ptGptbBase, csi_gptb_trgout_e byTrgOut, csi_gptb_trgsrc_e eTrgSrc);

/** \brief gptb evtrg cntxinit control
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] byCntChx: evtrg countinit channel(0~3)
 *  \param[in] byCntVal: evtrg cnt value
 *  \param[in] byCntInitVal: evtrg cntxinit value
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_set_evcntinit(csp_gptb_t *ptGptbBase, uint8_t byCntChx, uint8_t byCntVal, uint8_t byCntInitVal);

/** \brief gptb sync input filter config  
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] ptFilter: pointer of sync input filter parameter config structure
 *  \return error code \ref csi_error_t
 */
csi_error_t csi_gptb_set_sync_filter(csp_gptb_t *ptGptbBase, csi_gptb_filter_config_t *ptFilter);




/** \brief  gptb configuration Loading
 * 
 *  \param[in] ptGptbBase: pointer of gptb register structure
 *  \param[in] tCfg: refer to csi_gptb_feglk_config_t
 *  \return none
*/
csi_error_t csi_gptb_reglk_config(csp_gptb_t *ptGptbBase,csi_gptb_reglk_config_t *Global);


#ifdef __cplusplus
}
#endif

#endif /* _DRV_PWM_H_ */