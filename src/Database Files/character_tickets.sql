/****** Object:  Table [dbo].[character_tickets]    Script Date: 08/08/2011 17:03:49 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[character_tickets](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[owner] [int] NULL,
	[item_id] [int] NULL,
	[start_time] [datetime] NULL,
	[end_time] [datetime] NULL,
	[active] [tinyint] NULL CONSTRAINT [DF_character_tickets_active]  DEFAULT ((0))
) ON [PRIMARY]
